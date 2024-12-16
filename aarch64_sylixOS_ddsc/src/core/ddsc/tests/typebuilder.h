#define CU_TheoryDataPointsSize_ddsc_typebuilder_topic_desc(datapoints) ( datapoints.desc.n )
#define CU_TheoryDataPointsSlice_ddsc_typebuilder_topic_desc(datapoints, index) ( datapoints.desc.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_typebuilder_topic_desc() { struct { size_t n; const dds_topic_descriptor_t * *p; } desc; }
