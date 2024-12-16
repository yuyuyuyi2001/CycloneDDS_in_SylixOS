#define CU_TheoryDataPointsSize_ddsc_topic_discovery_remote_topics(datapoints) ( datapoints.num_pp.n )
#define CU_TheoryDataPointsSlice_ddsc_topic_discovery_remote_topics(datapoints, index) ( datapoints.num_pp.p[index], datapoints.num_tp.p[index], datapoints.hist_data.p[index], datapoints.live_data.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_topic_discovery_remote_topics() { struct { size_t n; uint32_t *p; } num_pp; struct { size_t n; uint32_t *p; } num_tp; struct { size_t n; bool *p; } hist_data; struct { size_t n; bool *p; } live_data; }
