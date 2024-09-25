#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSDBDEVICEINFO.szVendorId", sz_vendor_id, 0x0, 0x40, true, 0xe59b3ff4fcbfa174)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSDBDEVICEINFO.szDeviceId", sz_device_id, 0x40, 0x40, true, 0x99c0f945086cbe02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSDBDEVICEINFO.szSubVendorId", sz_sub_vendor_id, 0x80, 0x40, true, 0x197b2d14804c1890)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSDBDEVICEINFO.szSubSystemId", sz_sub_system_id, 0xc0, 0x40, true, 0xcb8bfae330e51170)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDEVICEINFO.dwModel", dw_model, 0x100, 0x20, true, 0x21ef4180941dce7a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDEVICEINFO.dwFamily", dw_family, 0x120, 0x20, true, 0x7e8d3cb04a45910)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDEVICEINFO.dwDate", dw_date, 0x140, 0x20, true, 0x2a0ddabc883c2d8b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDEVICEINFO.dwRevision", dw_revision, 0x160, 0x20, true, 0x5711c989484b8c0b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDEVICEINFO.dwCreatorRevision", dw_creator_revision, 0x180, 0x20, true, 0xbff16f25edc3209f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif