#pragma once
#include <xstd/intrinsics.hpp>
#include <span>
#include <string_view>
#include <unordered_map>
#include <list>
#include <ulua.hpp>
#include <flash/image.hpp>

namespace flash
{
	struct package;

	struct results
	{
		enum type_id
		{
			none, // None.               N/A,  nil
			imm,  // Immediate.          N/A,  int64_t
			arr,  // Array of immediates N/A,  std::vector<uint8_t> -> int64_t[]
			data, // Data RVA.           Type, int64_t
			func, // Function RVA.       Type, int64_t
			code, // Generated code      Type, std::vector<uint8_t>
		};
		enum state_id
		{
			pending,
			running,
			complete,
			failed
		};
		struct entry
		{
			std::string          name;
			type_id              type;
			std::string          type_details;
			ulua::function       fn;
			state_id             state = pending;
			
			int64_t              value_imm;
			std::vector<uint8_t> value_raw;
		};

		// List of entries.
		//
		std::list<entry> entries;

		// Label list for debugging.
		//
		std::unordered_map<uint64_t, std::string> labels;
		std::unordered_map<uint64_t, std::vector<std::string>> auto_labels;

		// Logs.
		//
		std::string error_log;
		std::string log;

		// Current pattern.
		//
		std::string current_pattern = {};

		// True if no errors occured during execution.
		//
		bool success() const { return error_log.empty(); }

		// Serializes the results.
		//
		std::vector<uint8_t> serialize() const;
	};

	struct engine
	{
		// Lua state associated.
		//
		ulua::state lua = {};

		// Target image.
		//
		image target;

		// Current results table.
		//
		results res = {};

		// Default construction.
		//
		engine( bool is_dev_mode );

		// No copy / move.
		//
		engine( const engine& ) = delete;
		engine& operator=( const engine& ) = delete;

		// Loads a script.
		//
		void load_script( std::string_view data, const char* name = "" );
		void load_script( std::span<const uint8_t> data, const char* name = "" ) 
		{ 
			return load_script( std::string_view{ ( const char* ) data.data(), data.size() }, name ); 
		}

		// Loads a package.
		//
		void load_package( const package* pkg );

		// Runs all scripts and returns the final results.
		//
		results& run();

		// Sets the target image.
		//
		void set_target( std::span<uint8_t> dump );
	};
};