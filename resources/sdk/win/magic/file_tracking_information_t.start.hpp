#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_TRACKING_INFORMATION.DestinationFile", destination_file, 0x0, 0x40, true, 0xdca98be79f4db539)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_TRACKING_INFORMATION.ObjectInformationLength", object_information_length, 0x40, 0x20, true, 0xdfac209c4a94dcfe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_FILE_TRACKING_INFORMATION.ObjectInformation", object_information, 0x60, 0x8, true, 0xf549a5e38dbfe25f)
#else
#define _m00
#define _m01
#define _m02
#endif