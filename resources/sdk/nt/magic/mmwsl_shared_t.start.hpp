#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_SHARED.FirstFree", first_free, 0x0, 0x0, false, 0xf85f532054991423)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_SHARED.FirstDynamic", first_dynamic, 0x0, 0x0, false, 0xb59577c8ef938d20)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_SHARED.LastEntry", last_entry, 0x0, 0x0, false, 0xab58480b94c4e83c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_SHARED.LastInitializedWsle", last_initialized_wsle, 0x0, 0x0, false, 0x955974c1e0dc74c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMWSL_SHARED.WsleSize", wsle_size, 0x0, 0x0, false, 0x2c778aba1934d7b7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_SHARED.NonDirectCount", non_direct_count, 0x0, 0x0, false, 0xac82f2879cd55c46)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMWSL_SHARED.LowestPagableAddress", lowest_pagable_address, 0x0, 0x0, false, 0xe805c11f7bc7ed32)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_nondirect_hash_t*), "_MMWSL_SHARED.NonDirectHash", non_direct_hash, 0x0, 0x0, false, 0x190f90c44bf5437b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_hash_t*), "_MMWSL_SHARED.HashTableStart", hash_table_start, 0x0, 0x0, false, 0x5bc11f50ff33cc27)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_hash_t*), "_MMWSL_SHARED.HighestPermittedHashAddress", highest_permitted_hash_address, 0x0, 0x0, false, 0x7c0d70991f47f7ab)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_t*), "_MMWSL_SHARED.Wsle", wsle, 0x0, 0x0, false, 0xb1a035c17c0645a)
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
#define _m09
#define _m10
#endif