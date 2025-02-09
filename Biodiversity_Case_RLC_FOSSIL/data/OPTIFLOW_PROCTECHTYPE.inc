SET PROCTECHTYPE(PROC,TECH_GROUP)                          
                                                           
/                                                          
                                                           
***BALMOREL_EXCHANGE                                       
Heat_Opti_to_Bal_Conv             .    Excess_Heat_OptiFlow
                                                           
***CO2                                                     
CO2_Source_FOSSIL                 .    CO2_FOSSIL          
CO2_Source_BIOGEN                 .    CO2_BIOGEN          
CO2_Source_DAC                    .    CO2_DAC             
                                                           
***TG                                                      
TG_20                             .    Gasifier            
TG_25                             .    Gasifier            
TG_30                             .    Gasifier            
TG_35                             .    Gasifier            
TG_40                             .    Gasifier            
TG_45                             .    Gasifier            
TG_50                             .    Gasifier            
BIO_TG_GRID_IN                    .    Gasifier            
                                                           
***Methanol                                                
Methanol_synthesis_TG_20          .    Methanol_synthesis  
Methanol_synthesis_TG_25          .    Methanol_synthesis  
Methanol_synthesis_TG_30          .    Methanol_synthesis  
Methanol_synthesis_TG_35          .    Methanol_synthesis  
Methanol_synthesis_TG_40          .    Methanol_synthesis  
Methanol_synthesis_TG_45          .    Methanol_synthesis  
Methanol_synthesis_TG_50          .    Methanol_synthesis  
                                                           
EMethanol_Upgrade_20              .    EMethanol_Upgrade   
EMethanol_Upgrade_25              .    EMethanol_Upgrade   
EMethanol_Upgrade_30              .    EMethanol_Upgrade   
EMethanol_Upgrade_35              .    EMethanol_Upgrade   
EMethanol_Upgrade_40              .    EMethanol_Upgrade   
EMethanol_Upgrade_45              .    EMethanol_Upgrade   
EMethanol_Upgrade_50              .    EMethanol_Upgrade   
                                                           
***Jet and oil products                                    
BioJet_20                         .    BioJet              
BioJet_25                         .    BioJet              
BioJet_30                         .    BioJet              
BioJet_35                         .    BioJet              
BioJet_40                         .    BioJet              
BioJet_45                         .    BioJet              
BioJet_50                         .    BioJet              
                                                           
BioJet_H2_20                      .    BioJet              
BioJet_H2_25                      .    BioJet              
BioJet_H2_30                      .    BioJet              
BioJet_H2_35                      .    BioJet              
BioJet_H2_40                      .    BioJet              
BioJet_H2_45                      .    BioJet              
BioJet_H2_50                      .    BioJet              
                                                           
E_FT_20                           .    E_FT                
E_FT_25                           .    E_FT                
E_FT_30                           .    E_FT                
E_FT_35                           .    E_FT                
E_FT_40                           .    E_FT                
E_FT_45                           .    E_FT                
E_FT_50                           .    E_FT                
                                                           
BioJet_SUM                        .    BioJet              
BioGasoline_SUM                   .    Biogasoline         
                                                           
***Buffers                                                 
MethanolBuffer                    .    MethanolBuffer      
EMethanolBuffer                   .    EMethanolBuffer     
AmmoniaBuffer                     .    AmmoniaBuffer       
EME_GasolineBuffer                .    EME_GasolineBuffer  
EME_JetBuffer                     .    EME_JetBuffer       
EME_LPGBuffer                     .    EME_LPGBuffer       
BioJetBuffer                      .    BioJetBuffer        
BioGasolineBuffer                 .    BioGasolineBuffer   
E_FT_JetBuffer                    .     E_FT_JetBuffer     
                                                           
/;                                                         
