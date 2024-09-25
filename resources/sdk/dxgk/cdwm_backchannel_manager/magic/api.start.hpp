#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CDWMBackchannelManager@@IEAA@PEAU_KEVENT@@@Z$dxgkrnl.sys", 0x6ab70, 0x0, true, 0x41c6fa94523ed164)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CDWMBackchannelManager$dxgkrnl.sys", 0x6ac7c, 0x0, true, 0x7a7989126f9c9073)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnablePresentStatisticsType@CDWMBackchannelManager$dxgkrnl.sys", 0x6ace0, 0x0, true, 0x956cc1afdabbd707)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PostNewMessage@CDWMBackchannelManager$dxgkrnl.sys", 0x6ad30, 0x0, true, 0x67807c96417d962f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif