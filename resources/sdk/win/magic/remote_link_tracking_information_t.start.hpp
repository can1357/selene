#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REMOTE_LINK_TRACKING_INFORMATION_.TargetFileObject", target_file_object, 0x0, 0x40, true, 0xa0acbcbdaea89b02)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMOTE_LINK_TRACKING_INFORMATION_.TargetLinkTrackingInformationLength", target_link_tracking_information_length, 0x40, 0x20, true, 0x6a666cc1ab78197d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_REMOTE_LINK_TRACKING_INFORMATION_.TargetLinkTrackingInformationBuffer", target_link_tracking_information_buffer, 0x60, 0x8, true, 0x81b5420c7a6c4053)
#else
#define _m00
#define _m01
#define _m02
#endif