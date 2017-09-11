package TheTypeOfStaff;

import PackOfCount.TheNumberOfStaff;
import java.util.Date;

public class TheNurses {

    TheNumberOfStaff StaffN = new TheNumberOfStaff();
    private final String Name;
    private Date joinedDate;
    private final int social_security_number;
    private final String education;
    private final int ward_number;
    private final String Type, Skills, Role;

    public TheNurses(int Pward_number,int Psocial_security_number, String PRole, String PSkills, String PEducation, String PName, String PType) {
        this.Skills = PSkills;
        this.social_security_number=Psocial_security_number;
        this.Role = PRole;
        this.Type = PType;
        this.ward_number = Pward_number;
        this.Name = PName;
        this.education = PEducation;
        StaffN.SetNurse();
        StaffN.SetTheNumberOfAll();
    }

    public String GetNameOfD() {
        return this.Name;
    }

    public String GetRoleOfD() {
        return this.Role;
    }

    public Date GetjoinedDateOfD() {
        return this.joinedDate;
    }

    public int Getsocial_security_numberOfD() {
        return this.social_security_number;
    }

    public String GeteducationOfD() {
        return this.education;
    }

    public String GetSkillsOfD() {
        return this.Skills;
    }

    public int Getward_numberOfD() {
        return this.ward_number;
    }

    public String GetTypeOfD() {
        return this.Type;
    }

    public int GetNumOfD() {
        return this.StaffN.GetNurse();
    }
}
