#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NotificationRegistry@@QEAA@XZ$dxgi.dll", 0x5f188, 0x0, true, 0x40a8af97fd703bbc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InsertNotificationRecord@NotificationRegistry$dxgi.dll", 0x6cdc, 0x0, true, 0x7b9a2e76eae30624)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyAll@NotificationRegistry$dxgi.dll", 0x73b4, 0x0, true, 0xadf87add44fe2de2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterEvent@NotificationRegistry$dxgi.dll", 0x6c88, 0x0, true, 0x1659df3321b0d1fb)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterWindowMessageA@NotificationRegistry$dxgi.dll", 0x71378, 0x0, true, 0x874152787fe8af7f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unregister@NotificationRegistry$dxgi.dll", 0x7dd4, 0x0, true, 0x7617730fa45684d0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif