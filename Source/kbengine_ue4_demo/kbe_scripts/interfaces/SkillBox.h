// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/*
*/
class SkillBox
{
public:
	SkillBox() {}
	SkillBox(Entity* entity);
	virtual ~SkillBox();

public:
	Entity* self;

};
