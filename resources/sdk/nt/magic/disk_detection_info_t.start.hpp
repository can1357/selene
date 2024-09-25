#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_DETECTION_INFO.SizeOfDetectInfo", size_of_detect_info, 0x0, 0x20, true, 0x972c1f11a1dfea34)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::detection_type_t), "_DISK_DETECTION_INFO.DetectionType", detection_type, 0x20, 0x20, true, 0x89b13b6b9a03039d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::disk_int13_info_t), "_DISK_DETECTION_INFO.Int13", int13, 0x40, 0x80, true, 0xab32bba17a7e4371)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::disk_ex_int13_info_t), "_DISK_DETECTION_INFO.ExInt13", ex_int13, 0xc0, 0x0, true, 0x7a20aabb5b8f905d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif