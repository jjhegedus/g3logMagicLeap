#ifndef _G3LOGMAGICLEAP_H
#define _G3LOGMAGICLEAP_H 1

#include <g3log/logmessage.hpp>
#include <ml_logging.h>

// magic leap logging

// *** BEGIN EXAMPLE CLIENT USAGE ***

// *** END EXAMPLE CLIENT USAGE ***

struct g3logMagicLeap {

  void ReceiveLogMessage(g3::LogMessageMover logEntry) {
    auto level = logEntry.get()._level;

    if (logEntry.get().level() == "DEBUG") {
      ML_LOG(Debug, "g3logMagicLeap:: LOG_LEVEL: %s, THREAD_ID: %s, TIME_STAMP: %s, FILE: %s, FILE_PATH: %s, FUNCTION: %s, MESSAGE: %s", logEntry.get().level().c_str(), logEntry.get().threadID().c_str(), logEntry.get().timestamp().c_str(), logEntry.get().file().c_str(), logEntry.get().file_path().c_str(), logEntry.get().function().c_str(), logEntry.get().message().c_str());
    }
    else if (logEntry.get().level() == "INFO") {
      ML_LOG(Info, "g3logMagicLeap:: LOG_LEVEL: %s, THREAD_ID: %s, TIME_STAMP: %s, FILE: %s, FILE_PATH: %s, FUNCTION: %s, MESSAGE: %s", logEntry.get().level().c_str(), logEntry.get().threadID().c_str(), logEntry.get().timestamp().c_str(), logEntry.get().file().c_str(), logEntry.get().file_path().c_str(), logEntry.get().function().c_str(), logEntry.get().message().c_str());
    }
    else if (logEntry.get().level() == "WARNING") {
      ML_LOG(Warning, "g3logMagicLeap:: LOG_LEVEL: %s, THREAD_ID: %s, TIME_STAMP: %s, FILE: %s, FILE_PATH: %s, FUNCTION: %s, MESSAGE: %s", logEntry.get().level().c_str(), logEntry.get().threadID().c_str(), logEntry.get().timestamp().c_str(), logEntry.get().file().c_str(), logEntry.get().file_path().c_str(), logEntry.get().function().c_str(), logEntry.get().message().c_str());
    }
    else if (logEntry.get().level() == "FATAL") {
      ML_LOG(Fatal, "g3logMagicLeap:: LOG_LEVEL: %s, THREAD_ID: %s, TIME_STAMP: %s, FILE: %s, FILE_PATH: %s, FUNCTION: %s, MESSAGE: %s", logEntry.get().level().c_str(), logEntry.get().threadID().c_str(), logEntry.get().timestamp().c_str(), logEntry.get().file().c_str(), logEntry.get().file_path().c_str(), logEntry.get().function().c_str(), logEntry.get().message().c_str());
    }

  }
};

#endif _G3LOGMAGICLEAP_H /* execinfo.h  */