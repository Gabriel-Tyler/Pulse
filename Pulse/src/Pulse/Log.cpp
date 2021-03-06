#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Pulse
{
	std::shared_ptr<spdlog::logger> Log::m_coreLogger;
	std::shared_ptr<spdlog::logger> Log::m_clientLogger;

	void Log::init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		m_coreLogger = spdlog::stdout_color_mt("PULSE");
		m_coreLogger->set_level(spdlog::level::trace);

		m_clientLogger = spdlog::stdout_color_mt("App");
		m_coreLogger->set_level(spdlog::level::trace);
	}
};