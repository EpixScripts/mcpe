/********************************************************************
	Minecraft: Pocket Edition - Decompilation Project
	Copyright (C) 2023 iProgramInCpp
	
	The following code is licensed under the BSD 1 clause license.
	SPDX-License-Identifier: BSD-1-Clause
 ********************************************************************/

#pragma once

#include "MobRenderer.hpp"

class HumanoidMobRenderer : public MobRenderer
{
public:
	HumanoidMobRenderer(HumanoidModel*, float);
	virtual void additionalRendering(Mob*, float) override;
	virtual void onGraphicsReset() override;
	virtual void renderName(Mob*, float, float, float) override;

	void renderHand();

public:
	HumanoidModel* m_pHumanoidModel;
};

