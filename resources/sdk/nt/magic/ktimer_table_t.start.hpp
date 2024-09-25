#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ktimer_t*, 64>), "_KTIMER_TABLE.TimerExpiry", timer_expiry, 0x0, 0x0, true, 0x30b347620c8a0588)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<struct nt::ktimer_table_entry_t, 256>, sdk::array<sdk::array<struct nt::ktimer_table_entry_t, 256>, 2>>), "_KTIMER_TABLE.TimerEntries", timer_entries, 0x1000, 0x0, true, 0xddd8176b207e1789)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_table_state_t), "_KTIMER_TABLE.TableState", table_state, 0x21000, 0xc0, true, 0x5b9c28097ee20bfb)
#else
#define _m00
#define _m01
#define _m02
#endif