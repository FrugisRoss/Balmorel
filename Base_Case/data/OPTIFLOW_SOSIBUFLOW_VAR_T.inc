PARAMETER SOSIBUFLOW_VAR_T(AAA,PROC,FLOW,SSS,TTT) "Variation in some Source, Sink or Buffer Flows over the year"                       
/                                                                                                                                      
                                                                                                                                       
/;                                                                                                                                     
                                                                                                                                       
SOSIBUFLOW_VAR_T(IA,'Productive_Forest_Land_Gen','CURRENT_PRODUCTIVE_FOREST_LAND',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;     
SOSIBUFLOW_VAR_T(IA,'Agricultural_Land_Gen','CURRENT_AGRICULTURAL_LAND',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;               
SOSIBUFLOW_VAR_T(IA,'Wood_Pellets_Gen','WOOD_PELLETS_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                        
SOSIBUFLOW_VAR_T(IA,'Manure_Gen','MANURE_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                                    
                                                                                                                                       
*SOSIBUFLOW_VAR_T(IA,'MUNI_WASTE_GEN','MUNI_WASTE_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                           
*SOSIBUFLOW_VAR_T(IA,'MANURE_GEN','MANURE_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                                   
*SOSIBUFLOW_VAR_T(IA,'DEEP_LITTER_GEN','DEEP_LITTER_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                         
*SOSIBUFLOW_VAR_T(IA,'FOOD_WASTE_GEN','FOOD_WASTE_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                           
*SOSIBUFLOW_VAR_T(IA,'NATURE_AREA_GEN','NATURE_AREA_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                         
*SOSIBUFLOW_VAR_T(IA,'Other_gas_Gen','OTHER_GAS_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                                 
*SOSIBUFLOW_VAR_T(IA,'NorthSeaGas','NATGAS_FLOW',S,T)$(AAAOPTIFLOW(IA) AND (not AAATRANSIT(IA))) = 1;                                  
                                                                                                                                       
