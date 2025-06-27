#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Conway {
	class CONWAY_API Log
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

// core log macros
#define CW_CORE_ERROR(...) ::Conway::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CW_CORE_WARN(...) ::Conway::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CW_CORE_INFO(...) ::Conway::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CW_CORE_TRACE(...) ::Conway::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CW_CORE_FATAL(...) ::Conway::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// client log macros
#define CW_ERROR(...) ::Conway::Log::GetClientLogger()->error(__VA_ARGS__)
#define CW_WARN(...) ::Conway::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CW_INFO(...) ::Conway::Log::GetClientLogger()->info(__VA_ARGS__)
#define CW_TRACE(...) ::Conway::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CW_FATAL(...) ::Conway::Log::GetClientLogger()->fatal(__VA_ARGS__)