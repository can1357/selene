#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VI_POOL_ENTRY_INUSE.VirtualAddress", virtual_address, 0x0, 0x40, true, 0xa0d8c89753960a45)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VI_POOL_ENTRY_INUSE.CallingAddress", calling_address, 0x40, 0x40, true, 0x1d885de16e9a960e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VI_POOL_ENTRY_INUSE.NumberOfBytes", number_of_bytes, 0x80, 0x40, true, 0xb86d96cd32dfc030)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VI_POOL_ENTRY_INUSE.Tag", tag, 0xc0, 0x40, true, 0x9750f1553031d31e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif