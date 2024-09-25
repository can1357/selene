#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_INFORMATION.Length", length, 0x0, 0x20, true, 0xf39992803eb041b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_RTL_USER_PROCESS_INFORMATION.ClientId", client_id, 0xc0, 0x80, true, 0x6bc8e5ad1e355f84)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::section_image_information_t), "_RTL_USER_PROCESS_INFORMATION.ImageInformation", image_information, 0x140, 0x0, true, 0xfc4c08b82f62ec97)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_INFORMATION.Process", process, 0x40, 0x40, true, 0xb62d9d1bfda77321)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_INFORMATION.Thread", thread, 0x80, 0x40, true, 0x23037ec410ce26d4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_INFORMATION.ProcessHandle", process_handle, 0x40, 0x40, true, 0xbb02b92f9877261b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_INFORMATION.ThreadHandle", thread_handle, 0x80, 0x40, true, 0xcd20dda01dfd55d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif