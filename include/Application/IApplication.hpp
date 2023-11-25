#ifndef IAPPLICATION_HPP
#define IAPPLICATION_HPP

/*
IApplication:
What it is:
	Purely abstract interface/contract for Application classes.
	Pipeline: Creation -> Initialization -> Run -> Finish -> Destroy

What it does:
	Provides a State about the whole program.
	Provides connection to IMEssageRouter interface.

Design:
	No design pattern used.
*/

#include "MessageRouter/IMessageRouter.hpp"

enum class STATE
{
	ON,
	OFF
};

class IApplication
{
protected:
	STATE m_State;
	IMessageRouter* p_MessageRouter;
public:
	virtual ~IApplication() = default;
	void executePipeline()
	{
		init();
		run();
		finish();
	}
	virtual void init() = 0;
	virtual void run() = 0;
	virtual void finish() = 0;
};

#endif // IAPPLICATION_HPP