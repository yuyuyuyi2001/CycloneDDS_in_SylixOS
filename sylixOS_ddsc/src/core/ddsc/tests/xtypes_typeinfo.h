#define CU_TheoryDataPointsSize_ddsc_xtypes_typeinfo_invalid_type_object_local(datapoints) ( datapoints.test_descr.n )
#define CU_TheoryDataPointsSlice_ddsc_xtypes_typeinfo_invalid_type_object_local(datapoints, index) ( datapoints.test_descr.p[index], datapoints.topic_desc.p[index], datapoints.mod.p[index], datapoints.matching_typeinfo.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_xtypes_typeinfo_invalid_type_object_local() { struct { size_t n; const char * *p; } test_descr; struct { size_t n; const dds_topic_descriptor_t * *p; } topic_desc; struct { size_t n; typeobj_modify *p; } mod; struct { size_t n; bool *p; } matching_typeinfo; }
#define CU_TheoryDataPointsSize_ddsc_typelookup_invalid_type_object_remote(datapoints) ( datapoints.test_descr.n )
#define CU_TheoryDataPointsSlice_ddsc_typelookup_invalid_type_object_remote(datapoints, index) ( datapoints.test_descr.p[index], datapoints.topic_desc.p[index], datapoints.mod.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_typelookup_invalid_type_object_remote() { struct { size_t n; const char * *p; } test_descr; struct { size_t n; const dds_topic_descriptor_t * *p; } topic_desc; struct { size_t n; typeobj_modify *p; } mod; }
