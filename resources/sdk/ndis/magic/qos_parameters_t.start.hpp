#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_QOS_PARAMETERS.Header", header, 0x0, 0x20, true, 0x2c0b8b5841070915)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xd132ccde83aefb69)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_PARAMETERS.NumTrafficClasses", num_traffic_classes, 0x40, 0x20, true, 0xa018dd4107b3640f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_PARAMETERS.PriorityAssignmentTable", priority_assignment_table, 0x60, 0x40, true, 0xfd74fc95b527c0af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_PARAMETERS.TcBandwidthAssignmentTable", tc_bandwidth_assignment_table, 0xa0, 0x40, true, 0x4dee984a9ff94238)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_PARAMETERS.TsaAssignmentTable", tsa_assignment_table, 0xe0, 0x40, true, 0xcf6da438dc83de6a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_PARAMETERS.PfcEnable", pfc_enable, 0x120, 0x20, true, 0x801085da82277651)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_PARAMETERS.NumClassificationElements", num_classification_elements, 0x140, 0x20, true, 0x196886adc47e18de)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_PARAMETERS.ClassificationElementSize", classification_element_size, 0x160, 0x20, true, 0x48e64a61ee55b82a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_PARAMETERS.FirstClassificationElementOffset", first_classification_element_offset, 0x180, 0x20, true, 0x42071035471c655)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif