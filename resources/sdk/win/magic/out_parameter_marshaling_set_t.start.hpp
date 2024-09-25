#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "OutParameterMarshalingSet._listBiases", list_biases, 0x80, 0x80, true, 0xef4b40d884e6fc81)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t), "OutParameterMarshalingSet._id", id, 0x100, 0x40, true, 0xbe1d580eabb00972)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "OutParameterMarshalingSet._listEntryForClient", list_entry_for_client, 0x180, 0x80, true, 0x439a3f332f40e633)
#else
#define _m00
#define _m01
#define _m02
#endif