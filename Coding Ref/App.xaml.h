﻿//
// App.xaml.h
// Declaration of the App class
//

#pragma once

#include "App.g.h"
#include "DataModel\SampleDataSource.h" // Required by App.xaml.cpp and generated code

namespace Coding_Ref
{
	/// <summary>
	/// Provides application-specific behavior to supplement the default Application class.
	/// </summary>
	ref class App sealed
	{
	public:
		App();
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args) override;

	private:
		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
	};
}
