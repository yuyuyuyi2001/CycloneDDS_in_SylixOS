#define CU_TheoryDataPointsSize_qos_provider_create(datapoints) ( datapoints.configuration.n )
#define CU_TheoryDataPointsSlice_qos_provider_create(datapoints, index) ( datapoints.configuration.p[index], datapoints.ret.p[index] )
#define CU_TheoryDataPointsTypedef_qos_provider_create() { struct { size_t n; char * *p; } configuration; struct { size_t n; dds_return_t *p; } ret; }
#define CU_TheoryDataPointsSize_qos_provider_create_scope(datapoints) ( datapoints.configuration.n )
#define CU_TheoryDataPointsSlice_qos_provider_create_scope(datapoints, index) ( datapoints.configuration.p[index], datapoints.tok.p[index], datapoints.n.p[index] )
#define CU_TheoryDataPointsTypedef_qos_provider_create_scope() { struct { size_t n; char * *p; } configuration; struct { size_t n; cscope_tokens_t *p; } tok; struct { size_t n; int32_t *p; } n; }
#define CU_TheoryDataPointsSize_qos_provider_get_qos(datapoints) ( datapoints.configuration.n )
#define CU_TheoryDataPointsSlice_qos_provider_get_qos(datapoints, index) ( datapoints.configuration.p[index], datapoints.key.p[index], datapoints.kind.p[index], datapoints.code.p[index] )
#define CU_TheoryDataPointsTypedef_qos_provider_get_qos() { struct { size_t n; char * *p; } configuration; struct { size_t n; char * *p; } key; struct { size_t n; dds_qos_kind_t *p; } kind; struct { size_t n; dds_return_t *p; } code; }
#define CU_TheoryDataPointsSize_qos_provider_get_qos_default(datapoints) ( datapoints.kind.n )
#define CU_TheoryDataPointsSlice_qos_provider_get_qos_default(datapoints, index) ( datapoints.kind.p[index], datapoints.dur_conf.p[index] )
#define CU_TheoryDataPointsTypedef_qos_provider_get_qos_default() { struct { size_t n; dds_qos_kind_t *p; } kind; struct { size_t n; sysdef_qos_conf_t *p; } dur_conf; }
#define CU_TheoryDataPointsSize_qos_provider_get_qos_all(datapoints) ( datapoints.kind.n )
#define CU_TheoryDataPointsSlice_qos_provider_get_qos_all(datapoints, index) ( datapoints.kind.p[index] )
#define CU_TheoryDataPointsTypedef_qos_provider_get_qos_all() { struct { size_t n; dds_qos_kind_t *p; } kind; }
#define CU_TheoryDataPointsSize_qos_provider_create_wrong_qos(datapoints) ( datapoints.kind.n )
#define CU_TheoryDataPointsSlice_qos_provider_create_wrong_qos(datapoints, index) ( datapoints.kind.p[index], datapoints.code.p[index] )
#define CU_TheoryDataPointsTypedef_qos_provider_create_wrong_qos() { struct { size_t n; dds_qos_kind_t *p; } kind; struct { size_t n; dds_return_t *p; } code; }
