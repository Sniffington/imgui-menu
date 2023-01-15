void Overlay::RenderMenu()
{
	ImGui::PushFont(font2);
	ImGui::SetNextWindowSize(ImVec2(520.000f, 280.000f), ImGuiCond_Once);
	ImGui::Begin("High On Life", NULL, 58);

	ImGui::SetCursorPos(ImVec2(8.000f, 32.000f));
	ImGui::Text("Player");

	ImGui::SetCursorPos(ImVec2(8.000f, 54.000f));
	ImGui::Checkbox("Inf Health", &health);

	ImGui::SetCursorPos(ImVec2(8.000f, 81.000f));
	ImGui::Checkbox("Inf Sheild", &sheild);

	ImGui::SetCursorPos(ImVec2(8.000f, 109.000f));
	ImGui::Checkbox("Inf Fuel", &fuel);

	ImGui::SetCursorPos(ImVec2(8.000f, 137.000f));
	ImGui::Checkbox("Inf Ammo", &ammo);

	ImGui::SetCursorPos(ImVec2(190.000f, 32.037f));
	ImGui::Text("Movement");

	ImGui::SetCursorPos(ImVec2(190.000f, 54.000f));
	ImGui::Checkbox("Inf Jump", &infjump);

	ImGui::SetCursorPos(ImVec2(190.000f, 81.000f));
	ImGui::Checkbox("Instant Acceleration", &instaccel);

	ImGui::SetNextItemWidth(150.000f);
	ImGui::SetCursorPos(ImVec2(190.000f, 109.000f));
	ImGui::SliderInt("Speed Multiplier", &speedmulti, 0, 10);

	ImGui::SetCursorPos(ImVec2(8.000f, 250.000f));
	if (ImGui::Button(("EXIT"), ImVec2(0.000f, 0.000f))) {
		exit(0);
	}

	ImGui::SetCursorPos(ImVec2(8.000f, 167.000f));
	ImGui::Text("Enemy");

	ImGui::SetCursorPos(ImVec2(8.000f, 189.000f));
	ImGui::Checkbox("One-Hit Kill", &ohk);

	ImGui::SetCursorPos(ImVec2(8.000f, 216.000f));
	ImGui::Checkbox("Stupid Enemies", &stupide);

	ImGui::SetNextItemWidth(150.000f);
	ImGui::SetCursorPos(ImVec2(190.000f, 137.000f));
	ImGui::SliderInt("Jump Multiplier", &jumpmulti, 0, 10);

	ImGui::SetCursorPos(ImVec2(190.000f, 167.000f));
	ImGui::Text("Inventory");

	ImGui::SetCursorPos(ImVec2(190.000f, 189.000f));
	ImGui::Button("Add 10K Pesos", ImVec2(0.000f, 0.000f));

	ImGui::SetCursorPos(ImVec2(190.000f, 216.000f));
	ImGui::Button("Add Warp Crystals", ImVec2(0.000f, 0.000f));

	ImGui::End();
}