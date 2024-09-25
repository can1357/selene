#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::desired_storage_class_t), "_StreamInformation.DesiredStorageClass", desired_storage_class, 0x0, 0x40, true, 0x99874fe96f14c456)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::data_stream_t), "_StreamInformation.DataStream", data_stream, 0x0, 0x80, true, 0x8b980aa2f3407869)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::reparse_t), "_StreamInformation.Reparse", reparse, 0x0, 0x60, true, 0x3b3d6a1e8852628f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ea_t), "_StreamInformation.Ea", ea, 0x0, 0x60, true, 0x196c089e9dc3823a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif