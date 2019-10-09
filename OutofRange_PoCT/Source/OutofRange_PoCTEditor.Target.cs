// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class OutofRange_PoCTEditorTarget : TargetRules
{
	public OutofRange_PoCTEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "OutofRange_PoCT" } );
	}
}
