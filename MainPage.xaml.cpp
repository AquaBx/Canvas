//
// MainPage.xaml.cpp
// Implémentation de la classe MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"


using namespace App3;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Core;

using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;

using namespace Windows::UI::Input::Inking;
using namespace Windows::UI::Core;


using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Shapes;


// Pour plus d'informations sur le modèle d'élément Page vierge, consultez la page https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();

	inkCanvas->InkPresenter->InputDeviceTypes = CoreInputDeviceTypes::Mouse | CoreInputDeviceTypes::Pen;


	auto size = Window::Current -> Bounds;


	for (int i = 0; i < 20; i++) {

		auto line1 = ref new Line();
		line1->Stroke = ref new SolidColorBrush(Windows::UI::Colors::Red);
		line1->StrokeThickness = 10;

		line1->X1 = i*size.Height * 21 / 29.7;
		line1->Y1 = 0;
		line1->X2 = i*size.Height * 21 / 29.7;
		line1->Y2 = size.Height;

		gridCanvas->Children->Append(line1);



		auto line2 = ref new Line();
		line2->Stroke = ref new SolidColorBrush(Windows::UI::Colors::Gray);
		line2->StrokeThickness = 1;

		line2->X1 = 0;
		line2->Y1 = 100+i*50;
		line2->X2 = 3000;
		line2->Y2 = 100 + i * 50;

		gridCanvas->Children->Append(line2);

	}



}
