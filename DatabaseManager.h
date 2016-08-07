#pragma once

class DatabaseInstance
{
	//Singleton pattern
};
class DatabaseManager
{
	DatabaseInstance instance;
public:
	void loadUserInfo();
	void loadSomething();

	void saveUserInfo();
	void saveSomething();
};