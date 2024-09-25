#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIAGNOSTIC_BUFFER.Size", size, 0x0, 0x40, true, 0x53c3dba65a25ac2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::requester_type_t), "_DIAGNOSTIC_BUFFER.CallerType", caller_type, 0x40, 0x20, true, 0x82efbe425ca58515)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIAGNOSTIC_BUFFER.ProcessImageNameOffset", process_image_name_offset, 0x80, 0x40, true, 0x723b6f8a2ff5ee7e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DIAGNOSTIC_BUFFER.ProcessId", process_id, 0xc0, 0x20, true, 0xfbce419b8dcb87ae)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DIAGNOSTIC_BUFFER.ServiceTag", service_tag, 0xe0, 0x20, true, 0xffe9c8eca438bc83)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIAGNOSTIC_BUFFER.DeviceDescriptionOffset", device_description_offset, 0x80, 0x40, true, 0x48df2e2364d9b1bd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIAGNOSTIC_BUFFER.DevicePathOffset", device_path_offset, 0xc0, 0x40, true, 0xbf5a83c36dd12492)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIAGNOSTIC_BUFFER.ReasonOffset", reason_offset, 0x100, 0x40, true, 0x5605cb2639922d20)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif