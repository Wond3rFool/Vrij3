using UnrealBuildTool;
using System.Collections.Generic;

public class VrijIIITarget : TargetRules
{
    public VrijIIITarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V5; // Correcte versie

        ExtraModuleNames.AddRange(new string[] { "VrijIII" });
    }
}