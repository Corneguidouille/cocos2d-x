﻿#pragma once

#include "app.g.h"
#include "platform/win8.1-universal/OpenGLES.h"
#include "platform/win8.1-universal/OpenGLESPage.xaml.h"

namespace CocosAppWinRT
{
    ref class App sealed
    {
    public:
        App();
        virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;

    private:
        void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
        void OnResuming(Platform::Object ^sender, Platform::Object ^args);

        OpenGLESPage^ mPage;
        OpenGLES mOpenGLES;
    };
}
