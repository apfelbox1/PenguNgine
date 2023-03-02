#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Pengu {
	class PENGU_API Log 
	{
		
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
		
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

		
	};
	
}

// Core Log Macros
#define PENGU_CORE_TRACE(...)   ::Pengu::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PENGU_CORE_INFO(...)    ::Pengu::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PENGU_CORE_WARN(...)    ::Pengu::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PENGU_CORE_ERROR(...)   ::Pengu::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PENGU_CORE_FATAL(...)   ::Pengu::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client Log Macros
#define PENGU_TRACE(...)        ::Pengu::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PENGU_INFO(...)         ::Pengu::Log::GetClientLogger()->info(__VA_ARGS__)
#define PENGU_WARN(...)         ::Pengu::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PENGU_ERROR(...)        ::Pengu::Log::GetClientLogger()->error(__VA_ARGS__)
#define PENGU_FATAL(...)        ::Pengu::Log::GetClientLogger()->fatal(__VA_ARGS__)

