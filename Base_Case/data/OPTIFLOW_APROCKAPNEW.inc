SET APROCKAPNEW(YYY,AAA,PROC)     'Areas for possible location of new Proc or capacity expansion of existing Proc'                                               
*This is stablished according to economy of scale, where large plants can only be located when heat demand is high                                               
                                                                                                                                                                 
/                                                                                                                                                                
***CO2                                                                                                                                                           
2020                                                                                                               .    Albertslund .    CO2_DAC_20              
2025                                                                                                               .    Albertslund .    CO2_DAC_25              
2030                                                                                                               .    Albertslund .    CO2_DAC_30              
2035                                                                                                               .    Albertslund .    CO2_DAC_35              
2040                                                                                                               .    Albertslund .    CO2_DAC_40              
2045                                                                                                               .    Albertslund .    CO2_DAC_45              
2050                                                                                                               .    Albertslund .    CO2_DAC_50              
*                                                                                                                                                                
2020                                                                                                               .    Albertslund .    CO2_STO                 
2025                                                                                                               .    Albertslund .    CO2_STO                 
2030                                                                                                               .    Albertslund .    CO2_STO                 
2035                                                                                                               .    Albertslund .    CO2_STO                 
2040                                                                                                               .    Albertslund .    CO2_STO                 
2045                                                                                                               .    Albertslund .    CO2_STO                 
2050                                                                                                               .    Albertslund .    CO2_STO                 
                                                                                                                                                                 
* OBS FF                                                                                                                                                         
$ifi not %baloptCCS%==yes $goto NO_CCS                                                                                                                           
2020                                                                                                               .    Albertslund .    CO2_Seq_20              
2025                                                                                                               .    Albertslund .    CO2_Seq_25              
2030                                                                                                               .    Albertslund .    CO2_Seq_30              
2035                                                                                                               .    Albertslund .    CO2_Seq_35              
2040                                                                                                               .    Albertslund .    CO2_Seq_40              
2045                                                                                                               .    Albertslund .    CO2_Seq_45              
2050                                                                                                               .    Albertslund .    CO2_Seq_50              
$label NO_CCS                                                                                                                                                    
                                                                                                                                                                 
*OBS FF                                                                                                                                                          
$ifi not %baloptgasbridge%==yes $goto NO_BIOGAS                                                                                                                  
2020                                                                                                               .    Albertslund .    Digestion_Tank_20       
2025                                                                                                               .    Albertslund .    Digestion_Tank_25       
2030                                                                                                               .    Albertslund .    Digestion_Tank_30       
2035                                                                                                               .    Albertslund .    Digestion_Tank_35       
2040                                                                                                               .    Albertslund .    Digestion_Tank_40       
2045                                                                                                               .    Albertslund .    Digestion_Tank_45       
2050                                                                                                               .    Albertslund .    Digestion_Tank_50       
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    Methanation_20          
2025                                                                                                               .    Albertslund .    Methanation_25          
2030                                                                                                               .    Albertslund .    Methanation_30          
2035                                                                                                               .    Albertslund .    Methanation_35          
2040                                                                                                               .    Albertslund .    Methanation_40          
2045                                                                                                               .    Albertslund .    Methanation_45          
2050                                                                                                               .    Albertslund .    Methanation_50          
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    Biogas_Upgrading_20     
2025                                                                                                               .    Albertslund .    Biogas_Upgrading_25     
2030                                                                                                               .    Albertslund .    Biogas_Upgrading_30     
2035                                                                                                               .    Albertslund .    Biogas_Upgrading_35     
2040                                                                                                               .    Albertslund .    Biogas_Upgrading_40     
2045                                                                                                               .    Albertslund .    Biogas_Upgrading_45     
2050                                                                                                               .    Albertslund .    Biogas_Upgrading_50     
                                                                                                                                                                 
$label NO_BIOGAS                                                                                                                                                 
                                                                                                                                                                 
***TG                                                                                                                                                            
2020                                                                                                               .    Albertslund .    TG_20                   
2025                                                                                                               .    Albertslund .    TG_25                   
2030                                                                                                               .    Albertslund .    TG_30                   
2035                                                                                                               .    Albertslund .    TG_35                   
2040                                                                                                               .    Albertslund .    TG_40                   
2045                                                                                                               .    Albertslund .    TG_45                   
2050                                                                                                               .    Albertslund .    TG_50                   
***Methanol                                                                                                                                                      
2020                                                                                                               .    Albertslund .    Methanol_synthesis_TG_20
2025                                                                                                               .    Albertslund .    Methanol_synthesis_TG_25
2030                                                                                                               .    Albertslund .    Methanol_synthesis_TG_30
2035                                                                                                               .    Albertslund .    Methanol_synthesis_TG_35
2040                                                                                                               .    Albertslund .    Methanol_synthesis_TG_40
2045                                                                                                               .    Albertslund .    Methanol_synthesis_TG_45
2050                                                                                                               .    Albertslund .    Methanol_synthesis_TG_50
*                                                                                                                                                                
2020                                                                                                               .    Albertslund .    EMethanol_synthesis_20  
2025                                                                                                               .    Albertslund .    EMethanol_synthesis_25  
2030                                                                                                               .    Albertslund .    EMethanol_synthesis_30  
2035                                                                                                               .    Albertslund .    EMethanol_synthesis_35  
2040                                                                                                               .    Albertslund .    EMethanol_synthesis_40  
2045                                                                                                               .    Albertslund .    EMethanol_synthesis_45  
2050                                                                                                               .    Albertslund .    EMethanol_synthesis_50  
*                                                                                                                                                                
2020                                                                                                               .    Albertslund .    EMethanol_Upgrade_20    
2025                                                                                                               .    Albertslund .    EMethanol_Upgrade_25    
2030                                                                                                               .    Albertslund .    EMethanol_Upgrade_30    
2035                                                                                                               .    Albertslund .    EMethanol_Upgrade_35    
2040                                                                                                               .    Albertslund .    EMethanol_Upgrade_40    
2045                                                                                                               .    Albertslund .    EMethanol_Upgrade_45    
2050                                                                                                               .    Albertslund .    EMethanol_Upgrade_50    
***Ammonia                                                                                                                                                       
2020                                                                                                               .    Albertslund .    Ammonia_Synthesis_20    
2025                                                                                                               .    Albertslund .    Ammonia_Synthesis_25    
2030                                                                                                               .    Albertslund .    Ammonia_Synthesis_30    
2035                                                                                                               .    Albertslund .    Ammonia_Synthesis_35    
2040                                                                                                               .    Albertslund .    Ammonia_Synthesis_40    
2045                                                                                                               .    Albertslund .    Ammonia_Synthesis_45    
2050                                                                                                               .    Albertslund .    Ammonia_Synthesis_50    
***Jet and oil products                                                                                                                                          
2020                                                                                                               .    Albertslund .    BioJet_20               
2025                                                                                                               .    Albertslund .    BioJet_25               
2030                                                                                                               .    Albertslund .    BioJet_30               
2035                                                                                                               .    Albertslund .    BioJet_35               
2040                                                                                                               .    Albertslund .    BioJet_40               
2045                                                                                                               .    Albertslund .    BioJet_45               
2050                                                                                                               .    Albertslund .    BioJet_50               
*                                                                                                                                                                
2020                                                                                                               .    Albertslund .    BioJet_H2_20            
2025                                                                                                               .    Albertslund .    BioJet_H2_25            
2030                                                                                                               .    Albertslund .    BioJet_H2_30            
2035                                                                                                               .    Albertslund .    BioJet_H2_35            
2040                                                                                                               .    Albertslund .    BioJet_H2_40            
2045                                                                                                               .    Albertslund .    BioJet_H2_45            
2050                                                                                                               .    Albertslund .    BioJet_H2_50            
*                                                                                                                                                                
2020                                                                                                               .    Albertslund .    E_FT_20                 
2025                                                                                                               .    Albertslund .    E_FT_25                 
2030                                                                                                               .    Albertslund .    E_FT_30                 
2035                                                                                                               .    Albertslund .    E_FT_35                 
2040                                                                                                               .    Albertslund .    E_FT_40                 
2045                                                                                                               .    Albertslund .    E_FT_45                 
2050                                                                                                               .    Albertslund .    E_FT_50                 
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    Untouched_Forest        
2025                                                                                                               .    Albertslund .    Untouched_Forest        
2030                                                                                                               .    Albertslund .    Untouched_Forest        
2035                                                                                                               .    Albertslund .    Untouched_Forest        
2040                                                                                                               .    Albertslund .    Untouched_Forest        
2045                                                                                                               .    Albertslund .    Untouched_Forest        
2050                                                                                                               .    Albertslund .    Untouched_Forest        
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    Wood_Production         
2025                                                                                                               .    Albertslund .    Wood_Production         
2030                                                                                                               .    Albertslund .    Wood_Production         
2035                                                                                                               .    Albertslund .    Wood_Production         
2040                                                                                                               .    Albertslund .    Wood_Production         
2045                                                                                                               .    Albertslund .    Wood_Production         
2050                                                                                                               .    Albertslund .    Wood_Production         
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    C_Rich_Soils_Extraction 
2025                                                                                                               .    Albertslund .    C_Rich_Soils_Extraction 
2030                                                                                                               .    Albertslund .    C_Rich_Soils_Extraction 
2035                                                                                                               .    Albertslund .    C_Rich_Soils_Extraction 
2040                                                                                                               .    Albertslund .    C_Rich_Soils_Extraction 
2045                                                                                                               .    Albertslund .    C_Rich_Soils_Extraction 
2050                                                                                                               .    Albertslund .    C_Rich_Soils_Extraction 
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    Wheat_Agriculture       
2025                                                                                                               .    Albertslund .    Wheat_Agriculture       
2030                                                                                                               .    Albertslund .    Wheat_Agriculture       
2035                                                                                                               .    Albertslund .    Wheat_Agriculture       
2040                                                                                                               .    Albertslund .    Wheat_Agriculture       
2045                                                                                                               .    Albertslund .    Wheat_Agriculture       
2050                                                                                                               .    Albertslund .    Wheat_Agriculture       
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    Barley_Agriculture      
2025                                                                                                               .    Albertslund .    Barley_Agriculture      
2030                                                                                                               .    Albertslund .    Barley_Agriculture      
2035                                                                                                               .    Albertslund .    Barley_Agriculture      
2040                                                                                                               .    Albertslund .    Barley_Agriculture      
2045                                                                                                               .    Albertslund .    Barley_Agriculture      
2050                                                                                                               .    Albertslund .    Barley_Agriculture      
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    Rye_Agriculture         
2025                                                                                                               .    Albertslund .    Rye_Agriculture         
2030                                                                                                               .    Albertslund .    Rye_Agriculture         
2035                                                                                                               .    Albertslund .    Rye_Agriculture         
2040                                                                                                               .    Albertslund .    Rye_Agriculture         
2045                                                                                                               .    Albertslund .    Rye_Agriculture         
2050                                                                                                               .    Albertslund .    Rye_Agriculture         
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    Oat_Agriculture         
2025                                                                                                               .    Albertslund .    Oat_Agriculture         
2030                                                                                                               .    Albertslund .    Oat_Agriculture         
2035                                                                                                               .    Albertslund .    Oat_Agriculture         
2040                                                                                                               .    Albertslund .    Oat_Agriculture         
2045                                                                                                               .    Albertslund .    Oat_Agriculture         
2050                                                                                                               .    Albertslund .    Oat_Agriculture         
                                                                                                                                                                 
2020                                                                                                               .    Albertslund .    New_Productive_Forest   
2025                                                                                                               .    Albertslund .    New_Productive_Forest   
2030                                                                                                               .    Albertslund .    New_Productive_Forest   
2035                                                                                                               .    Albertslund .    New_Productive_Forest   
2040                                                                                                               .    Albertslund .    New_Productive_Forest   
2045                                                                                                               .    Albertslund .    New_Productive_Forest   
2050                                                                                                               .    Albertslund .    New_Productive_Forest   
/                                                                                                                                                                
;                                                                                                                                                                
APROCKAPNEW(Y,AAA,PROC)$AAAOPTIFLOW(AAA)=APROCKAPNEW(Y,'Albertslund',PROC);                                                                                      
