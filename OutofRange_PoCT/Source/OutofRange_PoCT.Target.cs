// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class OutofRange_PoCTTarget : TargetRules
{
	public OutofRange_PoCTTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "OutofRange_PoCT" } );
	}
}
