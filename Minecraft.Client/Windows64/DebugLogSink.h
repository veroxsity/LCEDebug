#pragma once

#if defined(_WINDOWS64) && !defined(MINECRAFT_SERVER_BUILD)
#ifdef _FINAL_BUILD
inline void Win64InitialiseDebugLogSink() {}
inline void Win64WriteDebugLogLine(const char* str) { (void)str; }
#else
void Win64InitialiseDebugLogSink();
void Win64WriteDebugLogLine(const char* str);
#endif
#endif
