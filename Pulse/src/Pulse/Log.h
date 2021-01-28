#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Pulse
{
	class PULSE_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> m_coreLogger;
		static std::shared_ptr<spdlog::logger> m_clientLogger;
	public:
		
		static void init();

		inline static std::shared_ptr<spdlog::logger>& getCoreLogger()
		{
			return m_coreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& getClientLogger()
		{
			return m_clientLogger;
		}
	};

}

// Core log macros
#define PLS_CORE_TRACE(...) ::Pulse::Log::getCoreLogger()->trace(__VA_ARGS__)
#define PLS_CORE_INFO(...)  ::Pulse::Log::getCoreLogger()->info (__VA_ARGS__)
#define PLS_CORE_WARN(...)  ::Pulse::Log::getCoreLogger()->warn (__VA_ARGS__)
#define PLS_CORE_ERROR(...) ::Pulse::Log::getCoreLogger()->error(__VA_ARGS__)
#define PLS_CORE_FATAL(...) ::Pulse::Log::getCoreLogger()->fatal(__VA_ARGS__)

// Client Log macros
#define PLS_TRACE(...) ::Pulse::Log::getCoreLogger()->trace(__VA_ARGS__)
#define PLS_INFO(...)  ::Pulse::Log::getCoreLogger()->info (__VA_ARGS__)
#define PLS_WARN(...)  ::Pulse::Log::getCoreLogger()->warn (__VA_ARGS__)
#define PLS_ERROR(...) ::Pulse::Log::getCoreLogger()->error(__VA_ARGS__)
#define PLS_FATAL(...) ::Pulse::Log::getCoreLogger()->fatal(__VA_ARGS__)