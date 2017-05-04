using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Coursework
{
    public partial class StudentProgressForm : Form
    {
        public Form backForm;
        public int studentID;

        public StudentProgressForm()
        {
            InitializeComponent();
        }

        public StudentProgressForm(Form backForm, int studentID)
        {
            InitializeComponent();
            this.backForm = backForm;
        }

        private void backButton_Click(object sender, EventArgs e)
        {
            this.Hide();
            backForm.Show();
        }

        private void StudentProgressForm_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'prototypeDataSet.Кафедра' table. You can move, or remove it, as needed.
            this.кафедраTableAdapter.Fill(this.prototypeDataSet.Кафедра);
            // TODO: This line of code loads data into the 'prototypeDataSet.Учебная_группа' table. You can move, or remove it, as needed.
            this.учебная_группаTableAdapter.Fill(this.prototypeDataSet.Учебная_группа);
            // TODO: This line of code loads data into the 'prototypeDataSet.Учебный_предмет' table. You can move, or remove it, as needed.
            this.учебный_предметTableAdapter.Fill(this.prototypeDataSet.Учебный_предмет);
            // TODO: This line of code loads data into the 'prototypeDataSet.Студент' table. You can move, or remove it, as needed.
            this.студентTableAdapter.Fill(this.prototypeDataSet.Студент);
            // TODO: This line of code loads data into the 'prototypeDataSet.Посещаемость' table. You can move, or remove it, as needed.
            this.посещаемостьTableAdapter.Fill(this.prototypeDataSet.Посещаемость);
            // TODO: This line of code loads data into the 'prototypeDataSet.Успеваемость' table. You can move, or remove it, as needed.
            this.успеваемостьTableAdapter.Fill(this.prototypeDataSet.Успеваемость);
            // TODO: This line of code loads data into the 'prototypeDataSet.Преподаватель' table. You can move, or remove it, as needed.
            this.преподавательTableAdapter.Fill(this.prototypeDataSet.Преподаватель);
            // TODO: This line of code loads data into the 'mainDataSet.Teacher' table. You can move, or remove it, as needed.
            //this.teacherTableAdapter.Fill(this.mainDataSet.Teacher);
            // TODO: This line of code loads data into the 'mainDataSet.Subject' table. You can move, or remove it, as needed.
            //this.subjectTableAdapter.Fill(this.mainDataSet.Subject);
            // TODO: This line of code loads data into the 'mainDataSet.Attendance' table. You can move, or remove it, as needed.
            //this.attendanceTableAdapter.Fill(this.mainDataSet.Attendance);
            // TODO: This line of code loads data into the 'mainDataSet.Progress' table. You can move, or remove it, as needed.
            //this.progressTableAdapter.Fill(this.mainDataSet.Progress);
            /*
            var query = from studentSubject in this.mainDataSet.StudentSubject
                        where studentSubject.СтудентID == this.studentID
                        select studentSubject;
            */
            /*
            foreach (var u in query)
            {
                if (u.Пароль == password)
                {
                    if (u.Тип == "студент")
                    {
                        StudentMenuForm menuForm = new StudentMenuForm(u.Имя);
                        menuForm.Show();
                    }
                    else if (u.Тип == "преподаватель")
                    {
                        // Открытие меню для преподавателя
                    }
                    this.Hide();
                }
            }
            */

        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button6_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {

        }
    }
}
