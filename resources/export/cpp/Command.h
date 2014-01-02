#set($command = $helper.getByName($command-name, $robot))
#header()

#ifndef #constant($command.name)_H
\#define #constant($command.name)_H


\#include "Commands/Subsystem.h"
\#include "../Robot.h"
\#include "WPILib.h"
\#include "../WPILibExtensions/WPILibExtensions.h"

class #class($command.name): public Command {
public:
	#class($command.name)();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
