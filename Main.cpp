# include <Siv3D.hpp>
# define OPTIC_ANGLE 3.951
//ウィンドウの大きさに対応する視角の大きさ
//made by Kohei Tashiro

void Main()
{
	GUI gui(GUIStyle::Default);
	gui.setTitle(L"パラメータ");
	gui.add(L"text", GUIText::Create(L"", 300));

	Image mono(640, 480);
	DynamicTexture tex;
	int nami = 1;
	double cont = 127.0;
	while (System::Update())
	{
		for (int i = 0; i < 640; i++) {
			for (int j = 0; j < 480; j++) {
				mono[j][i] = Color(Sin(nami*i*2*Pi/640.0)*(cont)+127.0);
			}
		}

		if (Input::KeyUp.pressed) nami++;
		if (Input::KeyDown.pressed) nami--;
		if (Input::MouseL.pressed) cont -= 1.0;
		if (Input::MouseR.pressed) cont += 1.0;
		cont = Clamp(cont, 0.0, 127.0);
		
		tex.fill(mono);
		gui.text(L"text").text = Format(L"波数:", nami,L"コントラスト:", cont*2,L"周波数",1.0/OPTIC_ANGLE*nami);
		tex.draw();
	}
}
