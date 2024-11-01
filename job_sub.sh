###!/bin/sh
### General options
### -- specify queue --
#BSUB -q man
### -- set the job Name --
#BSUB -J DK_SE_DE
### -- ask for number of cores (default: 1) --
#BSUB -n 4
### -- specify that we need a certain architecture --
#BSUB -R "select[model == XeonGold6226R]"
### -- specify that the cores must be on the same host --
#BSUB -R "span[hosts=1]"
### -- specify that we need X GB of memory per core/slot --
#BSUB -R "rusage[mem=10GB]"
### -- specify that we want the job to get killed if it exceeds X GB per core/slot --
#BSUB -M 10.1GB
### -- set walltime limit: hh:mm --
#BSUB -W 72:00
### -- set the email address --
#BSUB -u frefri@dtu.dk
### -- send notification at start --
#BSUB -B
### -- send notification at completion --
#BSUB -N
### -- Specify the output and error file. %J is the job-id --
### -- -o and -e mean append, -oo and -eo mean overwrite --
#BSUB -o ./Logs/DK_SE_DE_1.out
#BSUB -e ./Logs/DK_SE_DE_1.err
# here follow the commands you want to execute with input.in as the input file

### Get paths to GAMS 37
### export PATH=/appl/gams/37.1.0:$PATH
### export LD_LIBRARY_PATH=/appl/gams/37.1.0:$LD_LIBRARY_PATH

# Get paths to GAMS 47
export PATH=/appl/gams/47.6.0:$PATH
export LD_LIBRARY_PATH=/appl/gams/47.6.0:$LD_LIBRARY_PATH

### Run Balmorel
cd /zhome/62/e/209625/BalOpt_Fork_Github/maritime_DK_SE_DE/model
gams Balmorel --threads $LSB_DJOB_NUMPROC

