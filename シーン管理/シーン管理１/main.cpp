//---------------------------------------------//
//					 メイン処理				   //
//---------------------------------------------//

#include "Scene.h"

std::shared_ptr<AppEnv> cApp::app_env;

int main()
{
	cApp::app_env=
		std::make_shared<AppEnv>(Window::WIDTH, Window::HEIGHT);

	Scene _Scene;

  while (cApp::app_env->isOpen())
  {
	_Scene.Update();
    cApp::app_env->begin();
    

	_Scene.Draw();


	if (cApp::app_env->isPushKey('P'))
	{
		break;
	}

	
    cApp::app_env->end();
  }
}
