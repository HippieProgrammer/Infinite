#pragma once

#include "infpch.h"
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Infinite {

	class INFINITE_API Log
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

//Core Logging Macros
#define INF_CORE_TRACE(...)    ::Infinite::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define INF_CORE_INFO(...)     ::Infinite::Log::GetCoreLogger()->info(__VA_ARGS__)
#define INF_CORE_WARN(...)     ::Infinite::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define INF_CORE_ERROR(...)    ::Infinite::Log::GetCoreLogger()->error(__VA_ARGS__)
#define INF_CORE_FATAL(...)    ::Infinite::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Logging Macros
#define INF_TRACE(...)         ::Infinite::Log::GetClientLogger()->trace(__VA_ARGS__)
#define INF_INFO(...)          ::Infinite::Log::GetClientLogger()->info(__VA_ARGS__)
#define INF_WARN(...)          ::Infinite::Log::GetClientLogger()->warn(__VA_ARGS__)
#define INF_ERROR(...)         ::Infinite::Log::GetClientLogger()->error(__VA_ARGS__)
#define INF_FATAL(...)         ::Infinite::Log::GetClientLogger()->fatal(__VA_ARGS__)

