//---------------------------------------------//
//					 メイン処理				   //
//---------------------------------------------//

#include "scene.h"

std::shared_ptr<AppEnv> cApp::app_env;

int main()
{
	cApp::app_env=
		std::make_shared<AppEnv>(Window::WIDTH, Window::HEIGHT);

	Batch _batch;

  while (cApp::app_env->isOpen())
  {
    cApp::app_env->begin();
    

	_batch.Update();
	_batch.Draw();


	if (cApp::app_env->isPushKey('P'))
	{
		break;
	}

    cApp::app_env->end();
  }
}
