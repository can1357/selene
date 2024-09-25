#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOOKUP_STREAM_FROM_CLUSTER_OUTPUT.Offset", offset, 0x0, 0x20, true, 0x7e1c97f8497c95e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOOKUP_STREAM_FROM_CLUSTER_OUTPUT.NumberOfMatches", number_of_matches, 0x20, 0x20, true, 0x7a88be83d642826b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOOKUP_STREAM_FROM_CLUSTER_OUTPUT.BufferSizeRequired", buffer_size_required, 0x40, 0x20, true, 0x3894d691f71e6ef8)
#else
#define _m00
#define _m01
#define _m02
#endif