#define CU_TheoryDataPointsSize_ddsc_nwpart_definition(datapoints) ( datapoints.ps.n )
#define CU_TheoryDataPointsSlice_ddsc_nwpart_definition(datapoints, index) ( datapoints.ps.p[index], datapoints.allow_mc.p[index], datapoints.uc.p[index], datapoints.mc.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_nwpart_definition() { struct { size_t n; struct ddsi_config_networkpartition_listelem *p; } ps; struct { size_t n; bool *p; } allow_mc; struct { size_t n; const char * *p; } uc; struct { size_t n; const char * *p; } mc; }
#define CU_TheoryDataPointsSize_ddsc_nwpart_selected_addrs(datapoints) ( datapoints.same_machine.n )
#define CU_TheoryDataPointsSlice_ddsc_nwpart_selected_addrs(datapoints, index) ( datapoints.same_machine.p[index], datapoints.proxypp_has_defmc.p[index], datapoints.n_ep_uc.p[index], datapoints.n_ep_mc.p[index], datapoints.expected.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_nwpart_selected_addrs() { struct { size_t n; bool *p; } same_machine; struct { size_t n; bool *p; } proxypp_has_defmc; struct { size_t n; int *p; } n_ep_uc; struct { size_t n; int *p; } n_ep_mc; struct { size_t n; const char ** *p; } expected; }
#define CU_TheoryDataPointsSize_ddsc_nwpart_full_stack_init(datapoints) ( datapoints.pistr.n )
#define CU_TheoryDataPointsSlice_ddsc_nwpart_full_stack_init(datapoints, index) ( datapoints.pistr.p[index], datapoints.msmstr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_nwpart_full_stack_init() { struct { size_t n; const char * *p; } pistr; struct { size_t n; const char * *p; } msmstr; }
