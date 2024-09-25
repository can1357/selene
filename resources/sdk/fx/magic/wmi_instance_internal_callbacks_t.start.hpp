#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_fx_wmi_instance_query_instance_t ), "FxWmiInstanceInternalCallbacks.QueryInstance", query_instance, 0x0, 0x40, true, 0xb3b9f30bea00c9e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_fx_wmi_instance_set_instance_t ), "FxWmiInstanceInternalCallbacks.SetInstance", set_instance, 0x40, 0x40, true, 0xc0869f728c48f5ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_fx_wmi_instance_set_item_t ), "FxWmiInstanceInternalCallbacks.SetItem", set_item, 0x80, 0x40, true, 0xa024e6337e78fd71)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_fx_wmi_instance_execute_method_t ), "FxWmiInstanceInternalCallbacks.ExecuteMethod", execute_method, 0xc0, 0x40, true, 0x480725d974732f0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif