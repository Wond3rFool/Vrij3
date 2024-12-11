using UnrealBuildTool;
using System.Collections.Generic;

public class VrijIIIEditorTarget : TargetRules
{
    public VrijIIIEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5; // Correcte versie

        ExtraModuleNames.AddRange(new string[] { "VrijIII" });
    }
}