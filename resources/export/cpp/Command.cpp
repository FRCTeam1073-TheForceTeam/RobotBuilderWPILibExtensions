#set($command = $helper.getByName($command-name, $robot))
#header()

\#include "#class($command.name).h"

#class($command.name)::#class($command.name)() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
#@autogenerated_code("requires", "	")
#parse("${exporter-path}Command-requires.cpp")
#end
}

// Called just before this Command runs the first time
void #class($command.name)::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void #class($command.name)::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool #class($command.name)::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void #class($command.name)::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void #class($command.name)::Interrupted() {

}
