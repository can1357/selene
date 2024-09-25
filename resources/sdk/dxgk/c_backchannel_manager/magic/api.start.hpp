#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Clear@CBackchannelManager$dxgkrnl.sys", 0x6ae44, 0x0, true, 0x88758ad56cd509fb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CBackchannelManager@@UEAA@XZ$dxgkrnl.sys", 0x6ae0c, 0x0, true, 0xf0466530fb7e64c1)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnablePresentStatisticsType@CBackchannelManager$dxgkrnl.sys", 0x1b260, 0x0, true, 0x938b35f524e3223c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PostNewMessage@CBackchannelManager$dxgkrnl.sys", 0x6aef0, 0x0, true, 0x269e00b59b2c418a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif