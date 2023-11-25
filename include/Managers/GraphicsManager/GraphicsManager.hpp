#ifndef GRAPHICSMANAGER_HPP
#define GRAPHICSMANAGER_HPP

// Parent classess as forward declarations

// Interface classess
#include "Managers/IManager.hpp"

// Child classess

// C++ modules

class GraphicsManager : public IManager
{
private:
	IMessageRouter* p_MessageRouter; // Non-owning pointer to parent MessageRouter
public:
	GraphicsManager(IMessageRouter* p_MessageRouter);
	~GraphicsManager() override;
	// ---------------------------------------
	void sendMessage(std::string message) override;
	void receiveMessage(std::string message) override;
};

#endif // GRAPHICSMANAGER_HPP