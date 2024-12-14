#define CU_TheoryDataPointsSize_ddsc_topic_find_global_find_delete_topics(datapoints) ( datapoints.num_local_pp.n )
#define CU_TheoryDataPointsSlice_ddsc_topic_find_global_find_delete_topics(datapoints, index) ( datapoints.num_local_pp.p[index], datapoints.num_remote_pp.p[index], datapoints.num_tp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_topic_find_global_find_delete_topics() { struct { size_t n; uint32_t *p; } num_local_pp; struct { size_t n; uint32_t *p; } num_remote_pp; struct { size_t n; uint32_t *p; } num_tp; }
